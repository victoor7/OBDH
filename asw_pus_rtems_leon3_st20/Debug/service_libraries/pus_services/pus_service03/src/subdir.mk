################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../service_libraries/pus_services/pus_service03/src/aux_pus_service3_exec_tc.c \
../service_libraries/pus_services/pus_service03/src/aux_pus_service3_tx_tm.c \
../service_libraries/pus_services/pus_service03/src/aux_pus_service3_utils.c \
../service_libraries/pus_services/pus_service03/src/pus_service3.c 

C_DEPS += \
./service_libraries/pus_services/pus_service03/src/aux_pus_service3_exec_tc.d \
./service_libraries/pus_services/pus_service03/src/aux_pus_service3_tx_tm.d \
./service_libraries/pus_services/pus_service03/src/aux_pus_service3_utils.d \
./service_libraries/pus_services/pus_service03/src/pus_service3.d 

OBJS += \
./service_libraries/pus_services/pus_service03/src/aux_pus_service3_exec_tc.o \
./service_libraries/pus_services/pus_service03/src/aux_pus_service3_tx_tm.o \
./service_libraries/pus_services/pus_service03/src/aux_pus_service3_utils.o \
./service_libraries/pus_services/pus_service03/src/pus_service3.o 


# Each subdirectory must supply rules for building sources it contributes
service_libraries/pus_services/pus_service03/src/%.o: ../service_libraries/pus_services/pus_service03/src/%.c service_libraries/pus_services/pus_service03/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	sparc-rtems-gcc -std=c99 -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/asw/edroom_glue/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service03/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_watchdog_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/device_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_sys_data_pool/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service20/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service03/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_tm_handler/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service01/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_service17/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_tm_handler/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_tc_handler/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/pus_services/pus_tc_accept_report/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/crc/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/edroomsl/edroombp/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/ccsds_pus/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/service_libraries/serialize/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/obt_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_hw_timecode_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_adc_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_gss/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/tmtc_dyn_mem/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/config/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/emu_sc_channel_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/sc_channel_drv/include" -I"/home/atcsol/git/OBDH/asw_pus_rtems_leon3_st20/llsw/rtems_osswr/include" -O0 -g3 -Wall -c -fmessage-length=0 -msoft-float -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-service_libraries-2f-pus_services-2f-pus_service03-2f-src

clean-service_libraries-2f-pus_services-2f-pus_service03-2f-src:
	-$(RM) ./service_libraries/pus_services/pus_service03/src/aux_pus_service3_exec_tc.d ./service_libraries/pus_services/pus_service03/src/aux_pus_service3_exec_tc.o ./service_libraries/pus_services/pus_service03/src/aux_pus_service3_tx_tm.d ./service_libraries/pus_services/pus_service03/src/aux_pus_service3_tx_tm.o ./service_libraries/pus_services/pus_service03/src/aux_pus_service3_utils.d ./service_libraries/pus_services/pus_service03/src/aux_pus_service3_utils.o ./service_libraries/pus_services/pus_service03/src/pus_service3.d ./service_libraries/pus_services/pus_service03/src/pus_service3.o

.PHONY: clean-service_libraries-2f-pus_services-2f-pus_service03-2f-src

