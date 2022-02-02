# config.py


def can_build(env, platform):
    # Not presently available on web
    return platform in ["windows", "linuxbsd", "linux", "x11"]


def configure(env):
    pass
