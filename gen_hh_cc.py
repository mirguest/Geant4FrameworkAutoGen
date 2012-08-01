#!/usr/bin/env python
# -*- coding:utf-8 -*-
# author: lintao

common_file_s = ["DetectorConstruction",
                "PhysicsList",
                "PrimaryGeneratorAction",
                "RunAction",
                "EventAction",
                "SteppingAction"]

def gen_fn_by_ext(ext):
    for fn in common_file_s:
        fn = fn + "." + ext
        yield fn

def gen(parent_dir, ext):
    import os.path
    for fn in gen_fn_by_ext(ext):
        whole = os.path.join(parent_dir, fn)
        if os.path.exists(whole):
            continue
        with open(whole, "w"):
            pass


if __name__ == "__main__":
    gen("./template/include/", "hh")
    gen("./template/src/", "cc")
