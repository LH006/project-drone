# LiteWing-Arduino-Drone

## 본체
* [깃허브 소스](https://github.com/Circuit-Digest/LiteWing/tree/main)
* [깃허브 소스 등등](https://github.com/Circuit-Digest)

## 조정기
* [조정기 어플](https://circuitdigest.com/articles/litewing-esp32-drone-gets-new-mobile-app?utm_source=Pinterest&utm_medium=organic)
* [조정기 어플 소스](https://github.com/EspressifApps/ESP-Drone-Android)

##
* [프로젝트](https://circuitdigest.com/wiki/litewing/)

##

MPU6050의 디지털 모션 프로세서(DMP)를 사용하여 요(Yaw), 피치(Pitch), 롤(Roll)(YPR) 값을 읽으면 PID 제어에 안정적이고 지연 시간이 짧은 입력값을 제공합니다. DMP가 센서 융합을 내부적으로 처리하므로 마이크로컨트롤러(예: Arduino)는 루프 계산에 집중할 수 있습니다. 
다음은 보류 중인 PID 튜닝을 위해 DMP 판독값을 통합하는 방법에 대한 안내입니다