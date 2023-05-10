#include "ros/rosh.h"
#include "std_msgs/String.h"

int main(int argc,char **argv)
{
    ros::init(argc,argv,"Publisher");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<std_msgs::String>("chatter",1000);
    ros::Rate loop_rate(10);

    while(ros::ok())
    {
        stf_msg::String msg;
        msg.data = "Hello World!";
        topic_pub.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();

    }
    return 0;
}