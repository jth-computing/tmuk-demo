import unittest
from reverseno import *

class TestReverse(unittest.TestCase):
    def test_zero(self):
        self.assertEqual(reverse(0), 0)

    def test_ott(self):
        self.assertEqual(reverse(123), 321)

    def test_sum(self):
        self.assertEqual(operate(3,"+",7), 10)

    def test_min(self):
        self.assertEqual(operate(10,"-",7), 3)

if __name__ == '__main__':
    unittest.main()
