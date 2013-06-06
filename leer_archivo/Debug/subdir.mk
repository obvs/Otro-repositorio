################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../personaje_trucho.c \
../read_nivel.c \
../read_personaje.c \
../señales.c \
../señales2.c \
../time.c 

OBJS += \
./personaje_trucho.o \
./read_nivel.o \
./read_personaje.o \
./señales.o \
./señales2.o \
./time.o 

C_DEPS += \
./personaje_trucho.d \
./read_nivel.d \
./read_personaje.d \
./señales.d \
./señales2.d \
./time.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/utnso/git/Otro-repositorio/commons" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


