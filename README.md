# Hi-Engine2


장점

- 프로젝트 셋팅에서 입력 처리 등록 [source](https://github.com/BudlePlay/make-game-on-led-matrix/blob/main/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/ProjectSetting.h)
- object에서 이벤트 형식으로 함수를 등록해 입력 처리 [example](https://github.com/BudlePlay/make-game-on-led-matrix/blob/f0ab3596857c70902f1384795b2b583f1b65ddad/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/User/src/Player.cpp#L25)
- 충돌 처리를 이벤트 형식으로 사용 [source](https://github.com/BudlePlay/make-game-on-led-matrix/blob/f0ab3596857c70902f1384795b2b583f1b65ddad/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/Engine/include/Object.h#L57)
- WorldOutliner가 object를 관리함 [source](https://github.com/BudlePlay/make-game-on-led-matrix/blob/main/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/Engine/include/WorldOutliner.h)
- 어디서든 object 추가 가능 [source](https://github.com/BudlePlay/make-game-on-led-matrix/blob/f0ab3596857c70902f1384795b2b583f1b65ddad/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/Engine/include/WorldOutliner.h#L16) [example](https://github.com/BudlePlay/make-game-on-led-matrix/blob/f0ab3596857c70902f1384795b2b583f1b65ddad/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/User/src/Player.cpp#L54)
- raspberry pi를 gpio 처리 지원 [source](https://github.com/BudlePlay/make-game-on-led-matrix/blob/main/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/Engine/include/IORaspberryPi.h)
- 게임에 필요한 자료구조 지원 [source](https://github.com/BudlePlay/make-game-on-led-matrix/blob/main/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/Engine/include/Unit.h)
- 쉬운 scene 교체 [source](https://github.com/BudlePlay/make-game-on-led-matrix/blob/f0ab3596857c70902f1384795b2b583f1b65ddad/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/Engine/include/SceneManager.h#L34) [example](https://github.com/BudlePlay/make-game-on-led-matrix/blob/f0ab3596857c70902f1384795b2b583f1b65ddad/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/User/src/Player.cpp#L67)
- 이동 등 추상적인 함수 제공 [source](https://github.com/BudlePlay/make-game-on-led-matrix/blob/f0ab3596857c70902f1384795b2b583f1b65ddad/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/Engine/include/Object.h#L48) [example](https://github.com/BudlePlay/make-game-on-led-matrix/blob/f0ab3596857c70902f1384795b2b583f1b65ddad/Hi-Engine2_forRaspberryPi/Hi-Engine2_forRaspberryPi/User/src/Bullet.cpp#L21)
