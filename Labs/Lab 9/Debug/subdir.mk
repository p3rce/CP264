################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lab9_test.c \
../data.c \
../list.c \
../process.c 

C_DEPS += \
./Lab9_test.d \
./data.d \
./list.d \
./process.d 

OBJS += \
./Lab9_test.o \
./data.o \
./list.o \
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
	-$(RM) ./Lab9_test.d ./Lab9_test.o ./data.d ./data.o ./list.d ./list.o ./process.d ./process.o

.PHONY: clean--2e-

