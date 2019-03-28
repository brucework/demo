package hello_world

import (
	"android/soong/android"
	"android/soong/cc"
	"fmt"
)

func init() {
	android.RegisterModuleType("hello_world_defaults", hello_worldDefaultsFactory)
}

func hello_worldDefaultsFactory() android.Module {
	module := cc.DefaultsFactory()
	android.AddLoadHook(module, hello_worldDefault)

	return module
}

func hello_worldDefault(ctx android.androidLoadHookContext) {
	type props struct {
		Cflags []string
	}
	p := &props{}
	p.Cflags = helloworld(ctx)
	ctx.AppendProperties(p)
}

func helloworld(ctx android.BaseContext) ([]string) {
	var cppflags []string

	fmt.Println("hello world!")

	if ctx.AConfig().IsTrue("ENABLE_USER2ENG") {
		cppflags = append(cppflags,
						"-DALLOW_ADBD_DISABLE_VERITY=1")
	}
}
