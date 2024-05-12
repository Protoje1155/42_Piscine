#!/bin/bash
ifconfig | awk '/ether/' | cut -b 15-31
