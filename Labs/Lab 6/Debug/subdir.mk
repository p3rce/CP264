################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lab6.c \
../Lab6_test.c 

C_DEPS += \
./Lab6.d \
./Lab6_test.d 

OBJS += \
./Lab6.o \
./Lab6_test.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Lab6.d ./Lab6.o ./Lab6_test.d ./Lab6_test.o

.PHONY: clean--2e-

