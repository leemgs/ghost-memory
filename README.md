[![Build Status](https://travis-ci.org/leemgs/ghost-memory.svg?branch=master)](https://travis-ci.org/leemgs/ghost-memory)


## Welcome to Ghost Memory

Ghost memory is to provide a network filesystem based flexible memory to solve a memory shortage issue of distributed devices. It is to dynamically (re-)computes by on-demand mecahnism to fit the current RAM size to avoid Out-of-Memory issue while build source codes.



### Background

Find a bad man in real situation without a simulation!!! Can you complete this mission?

### Design

It autogenerates and uses a swap file dynamically. The `/etc/init.d/***` script exists. So one does not need to have a fixed size swap partition. We enable the swap file, with file size (re-)computed automatically to fit the current RAM size instead of a swap partition.
By default, it creates swapfile twice as big as the present RAM amount with an upper limit of 2 GB.

### Installation
* In progress.


### Support or Contact

Contact me (`leemgs.at.gmail.com`) by sending an email.
