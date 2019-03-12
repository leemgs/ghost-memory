[![Build Status](https://travis-ci.org/leemgs/ghostmemory.svg?branch=dev)](https://travis-ci.org/leemgs/ghostmemory)

## Ghost Memory
Ghost memory aims to provide a network filesystem-based more flexible memory management to solve a memory shortage issue due to various situations in distributed environment. Also, It is to dynamically (re-)computes a required memory space based on on-demand mecahnism to fit the current RAM size to avoid Out-of-Memory issue while build source codes. Moreover, it guarantees stable software update without physicial hardware support in case that IoT devices have to need more memory capacity to update the existing software packages.


### Background
My First quesiton is "**Find a bad man in real situation without a simulation!**" in case that Out-of-Memory issue frequently happends.
This issue repeatedly happends among Server, Desktop, Embedded Devices, and IoT devices.


### Design
Ghost Memory is desigend and implemented based on the exisitng [swapspace](https://launchpad.net/ubuntu/+source/swapspace) project.
Whenever we try to allocate a partition for swap mechanism, We lost felxibility and utilizaiton of our storage. So, Ghost memory has to autogenerate and use a swap file dynamically with on-demand approach So, we do not need to have a fixed size swap partition. The `/etc/init.d/***` script has to be existed easy-to-usage to users. It enables or disables the swap file, with file size (re-)computed automatically to fit the current RAM size instead of a swap partition. By default, it creates swapfile twice as big as the present RAM amount with an upper limit of 2 GB.


### How to use
We assume that you use Ubuntu 16.04 x86_64 distribution. 
```bash
$ sudo debuild -us -uc
$ tree ./debian/ghostmemory
$ ls -al ../ghostmemory***.deb
$ sudo apt install ../*.deb
```

And then, start ghostmemory daemon as folows. 
```bash
$ sudo /etc/init.d/ghostmemory start
$ sudo /etc/init.d/ghostmemroy status 
$ sudo ls /var/lib/ghostmemory
$
```


### Contact
If you have any quesitons, Please do not hesitate to contact me. My email address is leemgs.at.gmail.com.
