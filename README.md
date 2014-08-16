ProtoToObjcTransition
=====================

make .proto to objc protocolbuffer


Usage
=====

- 打开终端输入命令，进入ProtocolBuffers-ObjC文件夹

```linux
cd ProtoToObjcTransition/ProtocolBuffers-ObjC
./autogen.sh
./configure
sudo make install
```

- 进入Protobuf_Generator文件夹，使用文本编辑run
- 将如下图所示位置的路径，改成protoc的路径，protoc所在位置，ProtoToObjcTransition/ProtocolBuffers-ObjC/src

![github logo](https://github.com/StephenZhuang/ProtoToObjcTransition/blob/master/2.png)

![github logo](https://github.com/StephenZhuang/ProtoToObjcTransition/blob/master/1.png)

- 将需要转化的.proto文件，放入Protobuf_Generator/proto文件夹下，双击run，iosproto文件夹下就会产生objc文件
