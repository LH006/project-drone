# ESP-Drone

* https://drive.google.com/drive/folders/18QSSe5u8A_p2iix2rqLfaRU-QODWJp0w
* https://github.com/Circuit-Digest/ESP-Drone



## ESP-Drone

* [English Version](./README.md)

### 简介

ESP-Drone 是基于乐鑫 ESP32/ESP32-S2/ESP32-S3 开发的小型无人机解决方案，可使用手机 APP 或游戏手柄通过 Wi-Fi 网络进行连接和控制。目前已支持自稳定飞行、定高飞行、定点飞行等多种模式。该方案硬件结构简单，代码架构清晰完善，方便功能扩展，可用于 STEAM 教育等领域。控制系统代码来自 Crazyflie 开源工程，使用 GPL3.0 开源协议。

> 目前已支持 ESP32、ESP32S2、ESP32S3, 请使用 ESP-IDF [release/v4.4](https://docs.espressif.com/projects/esp-idf/en/release-v4.4/esp32s2/get-started/index.html) 分支

![ESP-Drone](./docs/_static/espdrone_s2_v1_2_2.png)

* **从这里开始**: [Getting Started](https://docs.espressif.com/projects/espressif-esp-drone/zh_CN/latest/gettingstarted.html)
* **硬件原理图**：[Hardware](https://docs.espressif.com/projects/espressif-esp-drone/zh_CN/latest/_static/ESP32_S2_Drone_V1_2/SCH_Mainboard_ESP32_S2_Drone_V1_2.pdf)
* **iOS APP 源代码**: [ESP-Drone-iOS](https://github.com/EspressifApps/ESP-Drone-iOS)
* **Android APP 源代码**: [ESP-Drone-Android](https://github.com/EspressifApps/ESP-Drone-Android)

### 功能

1. 自稳定模式
2. 定高模式
3. 定点模式
4. APP 控制
5. 适配 cfclient 上位机 

注意，定高模式及定点模式需外接扩展板，详情见硬件参考。

### 支持政策

自 2022 年 12 月起，我们仅提供有限的支持，但是 Pull Request 仍然是被欢迎的！

### 第三方代码

第三方代码及证书如下：

| 组件 | License | 源代码 |Commit ID |
| :---:  | :---: | :---: |:---: |
| core/crazyflie | GPL-3.0 |[Crazyflie](https://github.com/bitcraze/crazyflie-firmware) |tag_2021_01 b448553|
| lib/dsp_lib |  | [esp32-lin](https://github.com/whyengineer/esp32-lin/tree/master/components/dsp_lib) |6fa39f4c|

### 致谢

1. 感谢 Bitcraze 开源组织提供很棒的 [Crazyflie](https://www.bitcraze.io/%20) 无人机项目代码；
2. 感谢乐鑫提供 ESP32 和 [ESP-IDF 操作系统](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s2/get-started/index.html)；
3. 感谢 WhyEngineer 提供的 stm32 dsp 移植库 [esp-dsp](https://github.com/whyengineer/esp32-lin/tree/master/components/dsp_lib)。





## []
<img src="https://github.com/Circuit-Digest/ESP-Drone/blob/8e10ca8f1701dee8f7fa0e6d4f82067c9e87177b/Tittle%20Image.png" width="" alt="alt_text" title="image_tooltip">
<br>
<a href="https://circuitdigest.com/tags/ESP32"><img src="https://img.shields.io/static/v1?label=&labelColor=505050&message=ESP32 Tutorials Circuit Digest&color=%230076D6&style=social&logo=google-chrome&logoColor=%230076D6" alt="circuitdigest"/></a>
<br>

For a full tutorial check out our [ESP32 Drone Article](https://circuitdigest.com/microcontroller-projects/DIY-wifi-controlled-drone).
For working video:  [How to build an ESP32 Drone](https://youtu.be/uzZjk0TQKtU).


Drones have rapidly evolved from niche hobbies to versatile tools with a wide range of applications, from photography to agriculture or even for defense and military purposes. Depending on the application, features and payload capacity their price will vary from pocket changes to a few million. Even though the basic principle behind these drones may appear simple, there is a lot of technology and computation that goes behind it for proper operations and a desired result from these drones. For example, maintaining stability while in the air requires precision sensors such as a Gyroscope and proper processing of reading taken with it. In this project we are going to make such a drone which can be easily controlled using our phones.
This DIY drone is small in size and can be built using easily available components such as ESP32 modules, MPU6050 IMU, coreless motors and plastic propellers.
<br>For anyone who is trying to flash the firmware using ESP32 Flash Download Tool, here are the file offsets for each binary
<br>0x1000 bootloader.bin
<br>0x10000 ESPDrone.bin
<br>0x8000 partition-table.bin
<br>
[Note: As this projects are very simple we are only providing the code, schemaitic, and a few essential images if you want to get the images or code explanations do check out the Circuit Digest website.
<br>
<br>