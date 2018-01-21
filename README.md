这是一个相当简单的周末开源项目

`This is a weekend open-source project which is quite simple`

[背景介绍] Background Information
--------------------------------

现在市场上已经有不少的的 CD 镜像编辑工具，比如 UltraISO，比如 CyBerian 编写的 CDImage GUI Beta 3

`There have been quite a few cd image creators available, like UltraISO and CDImage GUI Beta 3 by CyBerian`

但是很多时候，我们只需要制作一张简单的数据光盘用于存储文件，几乎不需要任何高级特性

`However, in most cases, we just need to create a simple image for data storage and do not care about other features`

市场上的大多数工具在这个场景下显得过于复杂了

`Most tools available on the Internet seem to be too complicated in this scenario`

因此我用周末的最后一点时间开发了这个小工具，这是一个开源的自由软件，源码以 GPLv3 协议发布

`Therefore, I developed this tool during the last bit of this weekend. This is an open-sourced freeware. The source code is released under the terms of GPLv3`

程序基于跨平台的应用程序框架 Qt 搭建，虽然理论上支持多平台，但是由于后端的 CDImage.exe 本体是 win32 程序，所以实际上只能在 Windows 平台运行

`The application is based on the Qt framework. It is not a cross-platform software because the cdimage.exe backend runs only on Windows`

本项目不包括 CDImage.exe 程序本身，你必须从其它渠道获得

`The backend cdimage.exe is not included in this repo and you must obtain it elsewhere`

在 Release 页面将提供了一个编译后的 CDImageGUI.exe 二进制程序，只要把它和 CDImage.exe 放在一起，图形前端就可以运行了

`The release page provides the compiled binary file: CDImageGUI.exe. Put it together with CDImage.exe, and it will run`

程序截图 [Screenshot]
--------------------

<img src='https://github.com/windy32/cdimage-gui/blob/master/html/screenshot.png' />

选择源文件目录，输入目标 iso 文件名，然后点击开始，完成后就可以得到一个简单的数据盘 iso 文件了

`Just select source directory, target iso file, click start, and it's done`
