# config.py


def can_build(env, platform):
    # Not presently available on web
    return platform != "javascript"


def configure(env):
    pass
