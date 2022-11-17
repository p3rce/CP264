################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lab7_test.c \
../cqueue.c \
../data.c \
../process.c 

C_DEPS += \
./Lab7_test.d \
./cqueue.d \
./data.d \
./process.d 

OBJS += \
./Lab7_test.o \
./cqueue.o \
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
	-$(RM) ./Lab7_test.d ./Lab7_test.o ./cqueue.d ./cqueue.o ./data.d ./data.o ./process.d ./process.o

.PHONY: clean--2e-

