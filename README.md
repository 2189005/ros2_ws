ROS2
2024-07-30 화요일

본격적으로 오늘부터 ROS2를 하기 위한 설치 작업을 함
https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html
이 링크에서 우분투 환경에서 설치하는 코드들을 통하여 설치함

그 후 터틀심을 통하여 노드, 토픽, 액션, 서비스를 사용하는 방법을 배움
거북이를 만들고 넣은 값에 따른 좌표나 각도로 움직이게 함

vs code 에서 사용하기 위한 설정과 CMakeLists파일, xml 파일, 그리고 패키지를 만들어 설치함

2024-07-31 수요일

publish와 subcrib에 대한 것을 배움
기본적으로 퍼블리셔 파일과 섭스크라이버 파일을 만들어서 사용함
퍼블리셔는 코드에서 작성한 내용을 내보내고 섭스크라이버는 그 내용을 받아서 출력해줌

그 후 좀 더 심화과정으로 헤더파일과 소스파일, 메인파일을 따로 나누어서 작성함

타임 퍼블리셔와 섭스크라이버를 통하여 그 메시지에 대한 내용의 시간 스탬프를 찍히도록 함

2024-08-01 목요일

설치에 대한 코드를 작성하여 설치함
그 후 터틀봇3에 대한 네트워크, 와이파이 설정 함
vs code를 통하여 터틀봇 내부의 파일을 열었고 그 안에 move_t_sim 내용을 복사함
복사한 후 추가적인 내용 수정 후 터틀 봇에서 명령을 수행하도록 하였으나 오류로 인하여 실패함

2024-08-08 목요일

rotate_turtle 파일을 만들어 터틀봇을 돌리는 코드를 제작하여 터틀봇을 돌리는 실습을 함
그 외에 CMakeLists파일을 수정하여 rotate_turtle 파일 인스톨을 추가해주고 관련된 파일들을 불러올 수 있도록 함

2024-08-12 월요일

simple_ridar, stay_thirty, follow_wall, waypoints_action 파일들을 만들고
ros2 run turtlebot3_teleop teleop_keyborad 명령어를 통해 키보드 입력을 가제보에서 받을 수 있도록 함
그 후 키보드 입력을 통해 터틀봇을 입력에 맞게 속도 및 방향을 조정하여 움직임을 조정함
ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py
코드를 통하여 가제보를 실행하고
ros2 launch turtlebot3_cartographer cartographer.launch.py use_sim_time:=True
코드를 통하여 카터그래퍼를 실행하고
ros2 launch turtlebot3_navigation2 navigation2.launch.py use_sim_time:=True
코드를 통하여 네비게이션2를 실행하여 터틀봇의 움직임을 확인함
그 후 waypoints_action 파일을 실행시켜 기존의 설정해놓은 경로를 따라 움직이도록 함

