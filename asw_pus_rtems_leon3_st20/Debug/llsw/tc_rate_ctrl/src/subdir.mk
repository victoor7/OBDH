################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../llsw/tc_rate_ctrl/src/tc_rate_ctrl.cpp 

CPP_DEPS += \
./llsw/tc_rate_ctrl/src/tc_rate_ctrl.d 

OBJS += \
./llsw/tc_rate_ctrl/src/tc_rate_ctrl.o 


# Each subdirectory must supply rules for building sources it contributes
llsw/tc_rate_ctrl/src/%.o: ../llsw/tc_rate_ctrl/src/%.cpp llsw/tc_rate_ctrl/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	sparc-rtems-g++ -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/components/ccbkgtcexec/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/components/cchk_fdirmng/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service03/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_watchdog_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/device_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/components/uah_asw/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/components/cctcmanager/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/edroom_glue/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/dataclasses/CDTCExecCtrl/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/dataclasses/CDTCAcceptReport/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/dataclasses/CDTCMemDescriptor/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/dataclasses/CDEvAction/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/dataclasses/CDTCHandler/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service20/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_sys_data_pool/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service03/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_tm_handler/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service17/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service01/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_tc_handler/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_tc_accept_report/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/crc/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/ccsds_pus/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/serialize/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/edroomsl/edroombp/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/edroomsl/edroomsl/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/edroomsl/edroomsl_types/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_gss/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_adc_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_hw_timecode_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/tc_rate_ctrl/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/tc_queue_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/config/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/obt_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/sc_channel_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_sc_channel_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/tmtc_dyn_mem/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/rtems_osswr/include" -O0 -g3 -Wall -c -fmessage-length=0 -msoft-float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-llsw-2f-tc_rate_ctrl-2f-src

clean-llsw-2f-tc_rate_ctrl-2f-src:
	-$(RM) ./llsw/tc_rate_ctrl/src/tc_rate_ctrl.d ./llsw/tc_rate_ctrl/src/tc_rate_ctrl.o

.PHONY: clean-llsw-2f-tc_rate_ctrl-2f-src

