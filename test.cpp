#include <android/sensor.h>
#include <iostream>

const char kPackageName[] = "ndk-example-app";

int main() {
    ASensorManager* sensorManager = ASensorManager_getInstanceForPackage(kPackageName);
    ASensorList list;
	int sensor_count = ASensorManager_getSensorList(sensorManager, &list);
	printf("Found %d sensors\n", sensor_count);
	for (int i = 0; i < sensor_count; i++) {
		printf("Found %s\n", ASensor_getName(list[i]));
	}
  /*   std::cout << "Number of sensors available: " << sensor_count << std::endl;
    std::cout << "------------------------------" << std::endl; */
    

    return 0;
}