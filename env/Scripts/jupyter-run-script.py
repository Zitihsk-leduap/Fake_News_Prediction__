
# -*- coding: utf-8 -*-
import re
import sys

from jupyter_client.runapp import RunApp

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(RunApp.launch_instance())
