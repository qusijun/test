#!/usr/bin/env python
# coding=utf-8
import logging

try:
    from logging import NullHandler
    print 1
except ImportError:
    class NullHandler(logging.Handler):
        pass

logging.getLogger(__name__).addHandler(NullHandler)
