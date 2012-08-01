#!/usr/bin/env python
# -*- coding:utf-8 -*-
# author: lintao

import sys
import os
import os.path

import string

class Generator_of_Geant4():
    files_of_hh_cc = ["DetectorConstruction",
                    "PhysicsList",
                    "PrimaryGeneratorAction",
                    "RunAction",
                    "EventAction",
                    "SteppingAction"]
    files_of_single = ["main.cc", 
                        "GNUmakefile"]

    def __init__(self, projectName, outputDir=None):
        self.rootpath = self.get_exe_path()
        self.templatepath = self.get_template_path()
        self.project_name = projectName
        self.output_dir = self.get_outputdir(outputDir)

        self.createRootDir()
        self.createDir("src")
        self.createDir("include")

        for i in self.files_of_single:
            self.gen_single(i)

        for j in self.files_of_hh_cc:
            self.gen_sub("include", j, ".hh")
            self.gen_sub("src", j, ".cc")

    def gen_sub(self, subdir, fn, ext):
        tem_fn = os.path.join(self.templatepath, subdir, fn + ext)
        fn = self.project_name + "_" + fn + ext
        out_fn = os.path.join(self.output_dir, subdir, fn)

        self.my_substiute(tem_fn, out_fn)

    def gen_single(self, fn):
        tem_fn = os.path.join(self.templatepath, fn)

        if fn.endswith(".cc"):
            fn = self.project_name + ".cc"

        out_fn = os.path.join(self.output_dir, fn)

        self.my_substiute(tem_fn, out_fn)

    def my_substiute(self, tem_fn, out_fn):
        if not os.path.exists(tem_fn):
            raise RuntimeError("Template [%s] does not exist"%tem_fn)
        if os.path.exists(out_fn):
            warning = "File [%s] already exists" % out_fn
            print warning
            return
            #raise RuntimeError(warning)
        with open(tem_fn) as f_tem:
            buffer = f_tem.read()
            string_templ = string.Template(buffer)
            string_fill = string_templ.safe_substitute(PY_GEN_Project=self.project_name)
            with open(out_fn, "w") as f:
                f.write(string_fill)
            pass

    def get_template_path(self):
        return os.path.join(self.rootpath, "template")

    def createRootDir(self):
        if os.path.exists(self.output_dir):
            return
        os.mkdir(self.output_dir)

    def createDir(self, directory):
        whole = os.path.join(self.output_dir, directory)
        if os.path.exists(whole):
            return
        os.mkdir(whole)
        pass


    def absdir(self, d):
        return os.path.abspath(
                os.path.normpath(
                  os.path.expanduser(d)))
    def get_exe_path(self):
        return self.absdir(os.path.dirname(__file__))
        #return self.absdir(os.path.dirname(sys.argv[0]))

    def get_outputdir(self, outputdir):
        if outputdir == None:
            outputdir = self.absdir(".")
        od = self.absdir(outputdir)

        od = os.path.join(od, self.project_name)
        return od


if __name__ == "__main__":
    gg = Generator_of_Geant4("Hello")
    pass
