################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lab8.c \
../Lab8_test.c \
../data.c \
../process.c 

C_DEPS += \
./Lab8.d \
./Lab8_test.d \
./data.d \
./process.d 

OBJS += \
./Lab8.o \
./Lab8_test.o \
./data.o \
./process.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Lab8.d ./Lab8.o ./Lab8_test.d ./Lab8_test.o ./data.d ./data.o ./process.d ./process.o

.PHONY: clean--2e-

