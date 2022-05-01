# config.py


def can_build(env, platform):
    # Not presently available on web
    return platform != "javascript" and platform != "linuxbsd"
  

def configure(env):
    pass



def get_doc_classes():
  return [
      "WasGoRuntime",
      "WasGoState",
      "WasmResource",
      "ResourceFormatLoaderWasm",
]


def get_doc_path():
  return "doc_classes"
