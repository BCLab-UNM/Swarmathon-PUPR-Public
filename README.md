This repository contans the Swarmathon ROS code made/change/modified by the PUPR Team. We do not own the rights of this program. For more information please consult Nasa Swarmathon Web Page.

# Swarmathon-ROS

This repository is a ROS (Robot Operating System) controller framework for the Swarmie robots used in the [NASA Swarmathon](http://www.nasaswarmathon.com), a national swarm robotics competition. This particular framework is a ROS implementation of the CPFA (central-place foraging algorithm) developed for [iAnt robot swarms](http://swarms.cs.unm.edu) at the [University of New Mexico](http://www.unm.edu/).

This repository contains:

1. Source code for ROS libraries (i.e. packages) that control different aspects of the Swarmie robot, including localization, mapping, mobility, and obstacle and target detection
2. 3D .STL models for the physical Swarmie build 
3. Bash shell scripts for initializing simulated Swarmies in the Gazebo simulator, as well as physical Swarmies

- Please submit bug reports for Swarmathon-ROS through GitHub's Issues system. For all other questions regarding the Swarmathon-ROS code base, please visit the forums on the [NASA Swarmathon website](http://www.nasaswarmathon.com).

- Please consult the [git scm](https://git-scm.com/) and [git best practices](https://sethrobertson.github.io/GitBestPractices/) for guidelines on the most effective approaches to maintaining code. Teams will be expected to commit new code at least every two weeks, and ideally commit one or more times per week. Consult the [NASA Swarmathon Timeline](http://www.nasaswarmathon.com) for specifics on how often code should be committed, as well as the cutoff date for final code revision before the competition.

Instructions:

1. Clone this GitHub repository to your home directory (~):

  ```
  cd ~
  git clone https://github.com/BCLab-UNM/Swarmathon-ROS.git
  ```

2. Rename the downloaded repo so it can be properly identified by ROS and catkin:

  ```
  mv ~/Swarmathon-ROS ~/rover_workspace
  ```

3. Change your current working directory to the root directory of the downloaded repo:

  ```
  cd ~/rover_workspace
  ```

4. Set up [ublox](http://wiki.ros.org/ublox) GPS submodule:

  ```
  git submodule init
  git submodule update
  ```

5. Compile Swarmathon-ROS as a ROS catkin workspace:
 
  Make sure bash is aware of the location of the ROS environment:
  ```
  if ! grep -q "source /opt/ros/indigo/setup.bash" ~/.bashrc
  then 
    echo "source /opt/ros/indigo/setup.bash" >> ~/.bashrc
  fi
  source ~/.bashrc
  ```
  
  Run catkin_make to build the Swarmathon code:
  
  ```
  catkin_make
  ```
  
6. Update your bash session to automatically source the setup file for Swarmathon-ROS:

  ```
  echo "source ~/rover_workspace/devel/setup.bash" >> ~/.bashrc
  source ~/.bashrc
  ```

7. Update your bash session to automatically export the enviromental variable that stores the location of Gazebo's model files:

  ```
  echo "export GAZEBO_MODEL_PATH=~/rover_workspace/simulation/models" >> ~/.bashrc
  echo "export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:~/rover_workspace/devel/lib/" >> ~/.bashrc
  source ~/.bashrc
  ```

##### 6. Run the Swarmathon-ROS simulation:

1. Change the permissions on the simulation run script to make it exectuatable:
  
  ```
  cd ~/rover_workspace
  chmod +x ./run.sh
  ```
  
2. Start the simulation

  ```
  ./run.sh
  ```

The GUI will now launch. The run script kills a number of gazebo and ROS processes. Killing these processes is suggested by gazebosim.com as the best way to clean up the gazebo environment at the moment.
