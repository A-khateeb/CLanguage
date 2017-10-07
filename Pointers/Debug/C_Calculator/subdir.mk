################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../C_Calculator/getch.c \
../C_Calculator/getop.c \
../C_Calculator/main.c \
../C_Calculator/stack.c 

OBJS += \
./C_Calculator/getch.o \
./C_Calculator/getop.o \
./C_Calculator/main.o \
./C_Calculator/stack.o 

C_DEPS += \
./C_Calculator/getch.d \
./C_Calculator/getop.d \
./C_Calculator/main.d \
./C_Calculator/stack.d 


# Each subdirectory must supply rules for building sources it contributes
C_Calculator/%.o: ../C_Calculator/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


