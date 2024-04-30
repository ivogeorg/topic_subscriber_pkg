### `topic_subscriber_pkg`

#### [`simple_topic_subscriber`](src/simple_topic_subscriber.cpp)

Subscribes to the `counter` messages published by [`topic_publisher`](https://github.com/ivogeorg/topic_publisher_pkg/blob/main/src/simple_topic_publisher.cpp).

`roslaunch topic_publisher_pkg topic_publisher_launch_file.launch`
`roslaunch topic_subscriber_pkg topic_subscriber_launch_file.launch`

#### [`robot_odometry`](src/robot_odometry.cpp)

`roslaunch topic_subscriber_pkg robot_odometry_launch_file.launch`

#### [`publish_age`](src/publish_age.cpp)

`roslaunch topic_subscriber_pkg robot_age_publisher_launch_file.launch`
