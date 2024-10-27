# temp


Name | Interface | IPv4 | IPv6
 ----------------------|--------------|------------
 WAN Cloud | br-PublicNet or ens224 VyOS-1 | e0 or eth0 Gateway | ||| 
 LAN1 - IPv4 and IPv6 | Ubuntu-CLI-DualStack | | DHCP | SLAAC VyOS-1 | e1 or eth1 | 
 ||| LAN2 - IPv6 Only | NA Ubuntu-GUI-v6 | NA | SLAAC VyOS-1 | e2 or eth2 | NA

| Name | Interface | IPv4 | IPv6 ----------------------|------------|----- WAN Cloud | br-zOtherNet or ens225 VyOS-2 e0 | Gateway | ||| LAN3 - IPv4 and IPv6-DHCP-PD | Ubuntu-GUI-DualStack | DHCP | SLAAC VyOS-2 e1 | e1 or eth1 | DHCP-PD sla_id 0 LAN3 - IPv4 and IPv6-DHCP-PD | VPCS-DualStack | DHCP | SLAAC VyOS-2 e1 | e2 or eth2 | DHCP-PD sla_id 1
