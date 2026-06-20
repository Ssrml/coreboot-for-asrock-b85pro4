coreboot README
===============

coreboot 是一个自由软件项目，旨在取代多数计算机中专有的固件（BIOS/UEFI）。coreboot 执行必要的硬件初始化以配置系统，随后将控制权移交给另一个可执行程序，在 coreboot 中称为“负载”（payload）。大多数情况下，负载的主要功能是启动操作系统（OS）。

通过将硬件初始化与后续启动逻辑相分离，coreboot 非常适合各种应用场景。它可用于直接在固件中运行的专业化应用、从闪存中运行操作系统、加载自定义引导程序，或实现 PC BIOS 服务或 UEFI 等固件标准。这种灵活性使得 coreboot 系统仅需包含目标应用所必需的功能，从而减少了所需的代码量和闪存空间。

[详情见这里](https://github.com/coreboot/coreboot) 


-----------
本仓库是专门为[华擎B85 pro 4](https://www.asrock.com/mb/Intel/B85%20Pro4/index.cn.asp) (不是B85m)适配的coreboot。
主要目的是为该主板添加Above 4G Decode和Resize Bar 功能.

<img width="1316" height="1016" alt="6645ea488e0898c53c1d294e8028b1e5" src="https://github.com/user-attachments/assets/cd9b727f-4947-4526-8e78-0d8d5eb811fb" />
