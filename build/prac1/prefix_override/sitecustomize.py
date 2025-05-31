import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/joselu15/Escritorio/Uni/p1_adr_jlmr/install/prac1'
