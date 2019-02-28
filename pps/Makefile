#
# Makefile for the PPS core.
#

#pps_core-y			:= pps.o kapi.o sysfs.o
#pps_core-$(CONFIG_NTP_PPS)	+= kc.o
#obj-$(CONFIG_PPS)		:= pps_core.o
#obj-y				+= clients/ generators/

#ccflags-$(CONFIG_PPS_DEBUG) := -DDEBUG

ifneq ($(KERNELRELEASE),)
obj-m := pps_core.o	
pps_core-objs := pps.o kapi.o sysfs.o
else
KDIR :=/lib/modules/$(shell uname -r)/build
all:
	make -C $(KDIR) M=$(PWD) modules
clean:
	rm -f *.ko *.o *.mod.o *.mod.c *.symvers
endif