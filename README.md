The proposed project entails creating a scaled-down version of an industrial 5-axis robotic arm designed for handling components on conveyor belts, with a key feature being its complete construction through 3D printing technology. To control its movements, the project utilizes the Blynk IoT application, enabling users to remotely operate and manage the robotic arm’s actions through a connected interface. This amalgamation of 3D printing and IoT control allows for a more accessible and customizable approach to implementing robotic automation in handling tasks.

In this project, the servo motors of the 5-axis robotic arm are controlled using a dedicated PWM (Pulse Width Modulation) servo control module. This module is responsible for generating the precise signals required to manipulate the servo motors, enabling accurate control of their positions and movements.

To establish a wireless connection and facilitate communication, an ESP32 WiFi module is incorporated. The ESP32 acts as an interface between the WiFi application (presumably the Blynk IoT application mentioned earlier) and the servo motor control module. Commands from the Blynk IoT application, sent over WiFi, are received by the ESP32, which then translates these commands into signals suitable for the servo motors.

Essentially, the ESP32 serves as a bridge, enabling wireless communication between the user-controlled application and the physical movement of the robotic arm’s servo motors. This setup allows for flexible and remote control of the 5-axis robotic arm, enhancing its usability and accessibility.

In the application, user interaction with the robotic arm’s movements is facilitated through slider controls. These sliders act as an intuitive interface, allowing users to adjust various parameters associated with the robotic arm’s motion, such as position or speed.

Moreover, the system is designed to be adaptable and upgradable. Over-The-Air (OTA) updates enable users to modify both the functionality of the robotic arm and the graphical user interface (GUI) of the slider interface remotely. This means that improvements, new features, or adjustments to the control system can be implemented without requiring physical access to the robotic arm. The OTA update capability enhances the flexibility and longevity of the project by allowing continuous refinement and customization even after deployment.

The waist and shoulder components of the robotic arm are equipped with metal gear MG995R servos, renowned for their strength and reliability. These servos enable the arm to lift objects weighing up to 150 grams and exert a gripping force of 175 grams.

An improvement in the gripper design has been implemented, featuring a redesigned jaw with a 2-point contact area. This design enhancement improves the arm’s ability to securely hold objects with complicated shapes, providing stability and versatility. The 2-point contact area ensures a more robust grip, allowing the robotic arm to handle a diverse range of objects under the specified weight limit. This updated gripper design enhances the overall functionality of the robotic arm, making it more adept at manipulating objects of varying shapes and sizes within its lifting capacity.
