 VBoxManage createvm --name "Ubuntu for Lyaskovskij 2" \
-ostype Ubuntu14_LTS --register
 VBoxManage storagectl "Ubuntu for Lyaskovskij 2" --name "myIDE" \
--add ide --controller PIIX4
VBoxManage storageattach "Ubuntu for Lyaskovskij 2" --storagectl "myIDE" --port 0 --device 0 --type dvddrive --medium ubuntu-14.04.6-server-i386.iso
VBoxManage modifyvm "Ubuntu for Lyaskovskij 2" --cpus 1
VBoxManage modifyvm "Ubuntu for Lyaskovskij 2" --memory 2225
VBoxManage modifyvm "Ubuntu for Lyaskovskij 2" --vram 122
vboxmanage modifyvm "Ubuntu for Lyaskovskij 2" --nic1 nat
VBoxManage modifyvm "Ubuntu for Lyaskovskij 2" \
--natpf1 "SSH,tcp,127.0.0.1,1234,10.0.2.15,22"
 VBoxManage storagectl "Ubuntu for Lyaskovskij 2" --name "mySATA" \
--add sata --controller IntelAHCI
 VBoxManage createmedium --filename disk01.vdi --size 8880
 VBoxManage storageattach "Ubuntu for Lyaskovskij 2" \
--storagectl "mySATA" --port 0 --device 0 --type hdd \
--medium disk01.vdi
 VBoxManage startvm "Ubuntu for Lyaskovskij 2"
 VBoxManage controlvm "Ubuntu for Lyaskovskij 2" savestate
VBoxManage startvm "Ubuntu for Lyaskovskij 2"
VBoxManage controlvm "Ubuntu for Lyaskovskij 2" poweroff
VBoxManage unregistervm "Ubuntu for Lyaskovskij 2" --delete-all

