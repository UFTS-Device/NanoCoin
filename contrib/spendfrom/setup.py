from distutils.core import setup
setup(name='chilispendfrom',
      version='1.0',
      description='Command-line utility for nanocoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@nanocoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
