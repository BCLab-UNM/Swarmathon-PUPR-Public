#include "SearchController.h"


SearchController::SearchController() {
  rng = new random_numbers::RandomNumberGenerator();
}

/**
 * This code implements a basic random walk search.
 */
geometry_msgs::Pose2D SearchController::search(geometry_msgs::Pose2D currentLocation) {
  geometry_msgs::Pose2D goalLocation;

  //select new heading from Gaussian distribution around current heading
  goalLocation.theta = rng->gaussian(currentLocation.theta, 0.25);

  //select new position 50 cm from current location
  goalLocation.x = currentLocation.x + (.2* cos(goalLocation.theta));//original(0.5)
  goalLocation.y = currentLocation.y + (.2* sin(goalLocation.theta));//original(0.5)

  return goalLocation;
}

/**
 * Continues search pattern after interruption. For example, avoiding the
 * center or collisions.
 */
geometry_msgs::Pose2D SearchController::continueInterruptedSearch(geometry_msgs::Pose2D currentLocation, geometry_msgs::Pose2D oldGoalLocation) {
  geometry_msgs::Pose2D newGoalLocation;

  //remainingGoalDist avoids magic numbers by calculating the dist
  double remainingGoalDist = hypot(oldGoalLocation.x - currentLocation.x, oldGoalLocation.y - currentLocation.y);
  float a = 0.2;
  float b = 0.2;
  for(int i = 0; i<500; i++)
    {
    newGoalLocation.theta = 0.01 * i;
    newGoalLocation.x = ( a + b *newGoalLocation.theta) * cos(newGoalLocation.theta);
    newGoalLocation.y = ( a + b *newGoalLocation.theta) * sin(newGoalLocation.theta);
    }

    return newGoalLocation;
}
//this of course assumes random walk continuation. Change for diffrent search methods.
  //newGoalLocation.theta = oldGoalLocation.theta;
  //newGoalLocation.x = currentLocation.x + (1.0 * cos(oldGoalLocation.theta)); //(remainingGoalDist * cos(oldGoalLocation.theta));//original(0.50)
  //newGoalLocation.y = currentLocation.y + (1.0 * sin(oldGoalLocation.theta)); //(remainingGoalDist * sin(oldGoalLocation.theta));//original(0.50)
  /*double golden_ratio = (sqrt(5)+1)/2;
    double fibonacci_angle = 360 / pow(golden_ratio,2);
    double c = 1;
    double num_points = 630;
    //newGoalLocation.x = rep(0, num_points);
    //newGoalLocation.y = rep(0, num_points);
    double theta,r;

    for (int i = 1; i< num_points; i++)
    {
        r=c*sqrt(i);
        theta= fibonacci_angle*(i);
        newGoalLocation.x=r*cos(theta);
        newGoalLocation.y=r*sin(theta);
    }*/
