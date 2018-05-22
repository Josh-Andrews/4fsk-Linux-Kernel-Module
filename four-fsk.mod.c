#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xdb0d8ebc, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfc01da1c, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x88dc7e6f, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x92cec8ce, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x7b0d0d08, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x583677ae, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x54647ff8, __VMLINUX_SYMBOL_STR(of_find_node_by_name) },
	{ 0x6a63b1c1, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x20ca31f3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1b55d4fa, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x52e125a4, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x39821e70, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xc2a42f9b, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x973c1054, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x149259a, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xb9dc6bef, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x5445472c, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5308a261, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xa9448183, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6fdecc7a, __VMLINUX_SYMBOL_STR(devm_gpio_free) },
	{ 0x8e5d8408, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x9adaf3a8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x65a8739c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-four_fsk");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-four_fskC*");

MODULE_INFO(srcversion, "B5ABEFF05B86D2547891237");
