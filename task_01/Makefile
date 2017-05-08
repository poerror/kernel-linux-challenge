obj-m += hello_world.o
KERNEL_PATH := /lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KERNEL_PATH) M=$(PWD) modules
clean:
	$(MAKE) -C $(KERNEL_PATH) M=$(PWD) clean
