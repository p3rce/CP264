################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../A2.c \
../A2_test.c \
../matrix.c 

C_DEPS += \
./A2.d \
./A2_test.d \
./matrix.d 

OBJS += \
./A2.o \
./A2_test.o \
./matrix.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./A2.d ./A2.o ./A2_test.d ./A2_test.o ./matrix.d ./matrix.o

.PHONY: clean--2e-

