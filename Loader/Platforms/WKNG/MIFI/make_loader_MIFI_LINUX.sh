#!/bin/bash

CUR=$(pwd)
#
#cd ../../../Build
#make -f BootLoader_linux.mak PLATFORM=WKNG SPI=1 I2C=1 OLED_SUPPORT=1 SH1106=1 UPDATE_USE_DETECT_USB=1 USTICA=1 FAN540X=1 DECOMPRESS_SUPPORT=1 MRD_CHECK=1 NEZHA_MIFI_V4R1=1 LWG_LTG_SUPPORT=1 PRODUCTION_MODE_SUPPORT=1
#cd $CUR

#cp ../release/JASPER/WKNG_LINUX_ARM_3_3_1.bin ./Nezha_MIFI_V4R1_SPI_NOKEY_BATTERY_DECOM_MRD.bin
#cp ../release/JASPER/WKNG_LINUX_ARM_3_3_1.map ./Nezha_MIFI_V4R1_SPI_NOKEY_BATTERY_DECOM_MRD.map


cd ../../../Build
make -f BootLoader_linux.mak PLATFORM=WKNG SPI=1 I2C=1 UPDATE_USE_DETECT_USB=1 USTICA=1 FAN540X=1 DECOMPRESS_SUPPORT=1 MRD_CHECK=1 NEZHA_MIFI_V4R1R1=1 ZIMI_LED_SUPPORT=1 ZIMI_LED_MODE=0 LWG_LTG_SUPPORT=1 PRODUCTION_MODE_SUPPORT=1 ZIMI_PB05=1 BACKUP_IMAGE=1 ZIMI_LAST_LED_MODE=0
cd $CUR

cp ../release/JASPER/WKNG_LINUX_ARM_3_3_1.bin ./Nezha_MIFI_V4R1R1_SPI_NOKEY_BATTERY_DECOM_MRD.bin
cp ../release/JASPER/WKNG_LINUX_ARM_3_3_1.map ./Nezha_MIFI_V4R1R1_SPI_NOKEY_BATTERY_DECOM_MRD.map

#cd ../../../Build
#make -f BootLoader_linux.mak PLATFORM=WKNG SPI=1 I2C=1 UPDATE_USE_DETECT_USB=1 USTICA=1 FAN540X=1 DECOMPRESS_SUPPORT=1 MRD_CHECK=1 NEZHA_MIFI_V4R1R1=1 LWG_LTG_SUPPORT=1 PRODUCTION_MODE_SUPPORT=1 BACKUP_IMAGE=1 ZIMI_LED_SUPPORT=1
#cd $CUR

#cp ../release/JASPER/WKNG_LINUX_ARM_3_3_1.bin ./Nezha_MIFI_V4R1R1_SPI_NOKEY_BATTERY_DECOM_MRD_BI.bin
#cp ../release/JASPER/WKNG_LINUX_ARM_3_3_1.map ./Nezha_MIFI_V4R1R1_SPI_NOKEY_BATTERY_DECOM_MRD_BI.map

