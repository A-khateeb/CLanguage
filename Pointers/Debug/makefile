################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include C_Calculator/cmake-build-debug/CMakeFiles/C_Calculator.dir/subdir.mk
-include C_Calculator/cmake-build-debug/CMakeFiles/3.7.2/CompilerIdC/subdir.mk
-include C_Calculator/cmake-build-debug/CMakeFiles/subdir.mk
-include C_Calculator/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Pointers

# Tool invocations
Pointers: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross GCC Linker'
	gcc  -o "Pointers" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Pointers
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
