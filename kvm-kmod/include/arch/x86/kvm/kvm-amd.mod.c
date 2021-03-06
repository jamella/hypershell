#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0xa7bcaced, "module_layout" },
	{ 0xac9ce195, "kvm_async_pf_task_wait" },
	{ 0xe8f9302e, "kmalloc_caches" },
	{ 0x353ffe08, "kvm_complete_insn_gp" },
	{ 0x74c08941, "kvm_async_pf_task_wake" },
	{ 0xeca851ca, "kvm_mmu_load" },
	{ 0x909933c2, "kvm_release_page_dirty" },
	{ 0x3d9748d0, "mem_map" },
	{ 0xfe8e797, "__tracepoint_kvm_nested_vmexit_inject" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x244c52a5, "page_address" },
	{ 0x43d7af0c, "kvm_set_msr_common" },
	{ 0x8b4d0a36, "kvm_mmu_invlpg" },
	{ 0xce3e2cbb, "kvm_vcpu_init" },
	{ 0x167556ae, "boot_cpu_data" },
	{ 0x92f39d44, "kvm_emulate_cpuid" },
	{ 0xee8ff414, "__tracepoint_kvm_exit" },
	{ 0xaecd614d, "kvm_queue_exception_e" },
	{ 0x6787c365, "kvm_get_rflags" },
	{ 0x485cd7f6, "kvm_rebooting" },
	{ 0x8e7a365f, "kvm_read_guest" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb7525b7a, "kvm_vcpu_on_spin" },
	{ 0xb3eaedda, "kvm_cpuid" },
	{ 0xde7fac63, "kvm_mmu_unload" },
	{ 0x2eb7a91b, "kvm_mmu_reset_context" },
	{ 0xa722a819, "cpu_has_amd_erratum" },
	{ 0x894a29bf, "kvm_mmu_page_fault" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0x2c6d0cfa, "__tracepoint_kvm_nested_intercepts" },
	{ 0x7d5822d0, "kvm_get_dr" },
	{ 0xd91510c7, "__tracepoint_kvm_invlpga" },
	{ 0x9035a07f, "kvm_set_cr8" },
	{ 0xbfa645b1, "__alloc_pages_nodemask" },
	{ 0xe7478a62, "kvm_set_cr0" },
	{ 0x624639d3, "kvm_get_cs_db_l_bits" },
	{ 0x31461c4c, "kvm_set_cr4" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0x7a877f6d, "kvm_mmu_unprotect_page_virt" },
	{ 0x39d758a7, "load_pdptrs" },
	{ 0x6439596f, "__tracepoint_kvm_skinit" },
	{ 0x4574c2b0, "kvm_write_tsc" },
	{ 0x1c1c00c2, "current_task" },
	{ 0xd0459e67, "kvm_has_tsc_control" },
	{ 0x50eedeb8, "printk" },
	{ 0x29444f0, "native_read_tsc" },
	{ 0x2f636c31, "kvm_spurious_fault" },
	{ 0x822ed17d, "__tracepoint_kvm_msr" },
	{ 0x5317dbe5, "kvm_emulate_hypercall" },
	{ 0x3c8d4951, "kunmap" },
	{ 0xb3cb7305, "kvm_set_dr" },
	{ 0x8cd29330, "kvm_vcpu_cache" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb19da91a, "kvm_is_linear_rip" },
	{ 0xb4390f9a, "mcount" },
	{ 0xe256b9d7, "kvm_x86_ops" },
	{ 0x9d9b1440, "kvm_get_cr8" },
	{ 0x45a0560f, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x547fa7de, "kvm_set_cr3" },
	{ 0x831327da, "kvm_max_guest_tsc_khz" },
	{ 0xc513ee25, "kvm_before_handle_nmi" },
	{ 0x1c233ece, "kvm_cpu_has_interrupt" },
	{ 0x1c7afd50, "__tracepoint_kvm_inj_virq" },
	{ 0x819d2678, "contig_page_data" },
	{ 0xf3708850, "__tracepoint_kvm_page_fault" },
	{ 0xb4929321, "kvm_set_rflags" },
	{ 0xeaffc9cc, "__tracepoint_kvm_nested_intr_vmexit" },
	{ 0x8af2d79d, "kmem_cache_alloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xcd6d1fea, "__free_pages" },
	{ 0x395fd360, "__tracepoint_kvm_write_tsc_offset" },
	{ 0xc9b63c01, "kmap" },
	{ 0xad6bdfbc, "kvm_after_handle_nmi" },
	{ 0x60c1e3c, "kvm_queue_exception" },
	{ 0x579fbcd2, "cpu_possible_mask" },
	{ 0x831cb2a5, "___ratelimit" },
	{ 0x70aa4593, "kvm_init_shadow_mmu" },
	{ 0x775a6ef5, "kvm_read_and_reset_pf_reason" },
	{ 0xced0031, "kvm_requeue_exception_e" },
	{ 0x55f2ccc3, "pv_cpu_ops" },
	{ 0xaaf935, "kvm_disable_tdp" },
	{ 0x3f6b9768, "x86_emulate_instruction" },
	{ 0x8ce4f3ab, "kvm_enable_tdp" },
	{ 0x7b22269d, "kvm_task_switch" },
	{ 0x8daf0779, "kmem_cache_alloc_trace" },
	{ 0x7ecb001b, "__per_cpu_offset" },
	{ 0x5aba45b5, "kvm_set_xcr" },
	{ 0xb63b6605, "__tracepoint_kvm_nested_vmrun" },
	{ 0x8d66a3a, "warn_slowpath_fmt" },
	{ 0x71cdc3c9, "kvm_emulate_halt" },
	{ 0xffb1c75e, "kvm_vcpu_uninit" },
	{ 0x37a0cba, "kfree" },
	{ 0xadd21dff, "kvm_get_msr_common" },
	{ 0x97c25f44, "pv_mmu_ops" },
	{ 0x7628f3c7, "this_cpu_off" },
	{ 0x2c7d07ca, "gfn_to_page" },
	{ 0x343d35e, "kvm_fast_pio_out" },
	{ 0x317f9e6b, "kvm_enable_efer_bits" },
	{ 0x62821d36, "__tracepoint_kvm_nested_vmexit" },
	{ 0xf1751dcc, "kvm_init" },
	{ 0x7a7c5175, "amd_erratum_383" },
	{ 0x27046576, "kvm_exit" },
	{ 0xa6463a86, "kvm_requeue_exception" },
	{ 0xf8c932af, "kvm_read_guest_page" },
	{ 0xbf00b4df, "kvm_rdpmc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kvm";


MODULE_INFO(srcversion, "D574D72F103447EF7359655");
