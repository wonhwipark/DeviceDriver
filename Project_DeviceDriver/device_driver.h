#pragma once
#include "flash_memory_device.h"

class DeviceDriver
{
public:
    DeviceDriver(FlashMemoryDevice* hardware);
    int read(long address);
    void write(long address, int data);

    void postConditionCheck(int ret, long address);

protected:
	static const int TestTryCount = 5; // Number of times to read the same address for post-condition check
    FlashMemoryDevice* m_hardware;
};