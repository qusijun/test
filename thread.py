#!/usr/bin/env python
# coding=utf-8
import threading
import time

def do_waiting1():
    print "start %s:"%threading.current_thread().name + time.strftime("%H:%M:%S")
    time.sleep(2)
    print "stop %s:"%threading.current_thread().name + time.strftime("%H:%M:%S")

def do_waiting2():
    print "start %s:"%threading.current_thread().name + time.strftime("%H:%M:%S")
    #time.sleep(8)
    for i in xrange(50):
        print i
    print "stop %s:"%threading.current_thread().name + time.strftime("%H:%M:%S")

tsk = []
thread1 = threading.Thread(target = do_waiting1)
thread1.start()
tsk.append(thread1)
thread2 = threading.Thread(target = do_waiting2)
thread2.start()
tsk.append(thread2)

print "start join:" + time.strftime("%H:%M:%S")
for task in tsk:
    task.join(2)
print "stop join:" + time.strftime("%H:%M:%S")
