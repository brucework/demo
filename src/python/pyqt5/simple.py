#/usr/bin/python

# -*- coding: utf-8 -*-

'''
ZetCode PyQt5 tutorial

In this example, we create a simple linux in PyQt5.

author: bruce
'''
import sys

from PyQt5.QtWidgets import QApplication, QWidget

if __name__ == '__main__':
    app = QApplication(sys.argv)

    w = Qwidget()
    w.resize(250, 150)
    w.move(300, 300)
    w.setWindowTitle('Simple')
    w.show()

    sys.exit(app.exec_())

