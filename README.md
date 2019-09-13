# seed_r7_ros_pkg
seed-noid meta package

## 実機なしでの動作確認方法
下記コマンドを実行してください
```
roslaunch seed_r7_bringup moveit.launch
```
moveit_rvizが起動するので、Interactive Markerで適当な位置に手先を移動させ、  
``Plan and Execute``ボタンを押して動かします。

## 実機での動作確認方法
ロボットのUSBをPCに接続し、下記コマンドを実行し、ターミナルの指示に従ってください。   
**2回目以降は不要です**
```
rosrun seed_r7_bringup make_udev_install.py
```
setserialのインストールは推奨です。
SEED-Moverを使わない場合、下記のように設定してください。
* upper USB : yes
* lower USB : none

USBを挿抜後、ロボットの電源を入れ、下記いずれかの方法でロボットを操作してください。

### 単軸での動作確認
下記コマンドを実行してください。
```
roslaunch seed_r7_bringup seed_r7_bringup.launch
rosrun rqt_joint_trajectory_controller rqt_joint_trajectory_controller 
rosrun rviz rviz
```
``rqt_joint_trajectory``のcontrollerをarm_controllerとし、電源ボタンを押した後、
スライダーを左右に動かすとロボットが動き出します。

### moveitでの動作確認
下記コマンドを実行してください。
```
roslaunch seed_r7_bringup moveit.launch
```
Interactive Markerで操作後、``Plan and Execute``ボタンを押すと実機が動きます。

## ハンドの開閉
下記コマンドを実行してください。
* 把持の場合　：　``/seed_r7_ros_controller/hand_control right grasp 100``
* 解放の場合　：　``/seed_r7_ros_controller/hand_control right ungrasp 100``

最後の数字は把持電流[%]です。50〜100程度で調整してください。