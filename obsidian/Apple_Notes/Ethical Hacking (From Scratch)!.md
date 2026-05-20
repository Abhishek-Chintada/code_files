By tryhackme & Cybrary.

- [ ] We need to master the cyber and networking basics before firing into hacking directly.

### Cyber World!

- [ ] Firstly there are two types of security systems. One of them is offensive security and the other is a defensive one. The offensive one is the type which makes us to think in the lines of the hacker and find potential loopholes to clear them out. On the other hand, defensive security as the name suggests monitors continuously the networking and the database for any breaches.
- [ ] Sometimes websites give us some extra information through hidden urls which can be found by using the ‘dirb’ command in the terminal. These help us to use brute force to take a list of potential page names and testing one by one if they exist in the website. This approach works because people use predictable names most of the times. To use the command we just simply run the dirb command followed by the url of the website in the terminal.
- [ ] Organisations basically have a set of security teams which contain members like SOC Analyst(monitoring), Incident Responder, Security Engineer (creates and maintains the security tools), Digital Forensic (members who understand, gather and preserve the info of the attack for future use) etc.
- [ ] Most organisations have various layers of protection like employee training, intrusion detection systems, firewalls, and various security policies. This is called the ‘Defence Of Depth’.
- [ ] A SOC (Security Operations Centre) is he defensive security centre for an organisation’s technology. Its functions are to review alerts, investigate anomalies, and to respond to incidents.
 Another similar type of system is a SIEM (the defensive security radar!). the full for of it is Security Information and Event Management. As the name suggests these take care of the tremendous amount of info collected by the security teams and provides clear pathways for response.
- [ ] The category of a security analyst contains various vacancies as of now and is a booming branch. This category has many types like threat hunting, incident response, malware analysis.
- [ ] For more of a problem solving type, security engineer is the best fit. It includes designing and maintaining security systems, keeping track of the hacking techniques used and also documenting the processes and procedures used, while assessing the risks and providing protection against the vulnerabilities.
- [ ] A penetration tester is the guy who tries to safely break into the company’s systems and check the levels of security of the company. This suits the methodical and the curious fellows. This falls under the category of offensive security. The other two above are defensive security. Red teaming is a senior and advanced progression from penetrating.
- [ ] We generally follow the CIA triad for the basis of cybersecurity :
1. Confidentiality : preserving authorised access and imposing restrictions on the data and information including the means for protecting personal privacy  and proprietary data.
2. Integrity : guarding improper information modification or destruction and includes ensuring information non repudiation and authenticity.
3. Availability : ensuring timely and reliable access too and use of the information.

- [ ] A network is basically two or more computers that are linked together and share a common set of resources, files and services.
- [ ] A router is a device that connects networks and routes the traffic between them.
- [ ] An ethernet switch connects the nodes (computers) on the same network. note that a switch only traffics the data between computers on the same network unlike the router which traffics data between networks.
- [ ] A hub is also a kind of switch but with the disadvantage that it broadcasts the data to all the nodes and is not smart enough to send the data to a specific node only.
- [ ] Endpoints are the points where the data ends as it goes out of the network, to a human and back again.
- [ ] Servers are simply computers that provide a particular service. (Like web servers, print servers, email servers etc.)
- [ ] A firewall is a device that filters the traffic going between the networks for the purpose of protecting the network.
- [ ] Please Do Not Touch Steves Pet Alligator - Physical layer, Data link layer, Network layer, transport layer, Session layer, Presentation layer, Application layer. - Constituents of the Open Systems Interconnection (OSI Model)
- [ ] IP Model - Link Layer, Network layer, Transport layer, Application layer.
- [ ] A port is like an entry point - like a doorway - we can open and close the ports just like a door.
- [ ] A protocol is a set of rules for communication - just like grammar for a language.
- [ ] Insecure ports - doors without locks and languages (protocols) that are easy to understand.
- [ ] Secure ports - doors with locks and languages that are encrypted and need a key to crack.
- [ ] IP - Internet protocol - about getting the address to which to send the data.
- [ ] TCP - Transmission Control Protocol - enables application programs and computing devices to exchange messages.
- [ ] UDP - User Datagram Protocol - low latency and loss tolerance - mostly used for streaming - no acknowledgement needed.

![[SCR-20260304-tens.png]]

- [ ] FTP - File transfer protocol ; Telnet - Teleportation protocol (used for establishing remote portals) ; SMTP - mail transfer protocols ; IMAP - also a mail transfer protocol ; Time - time synchronisation for different computers ; DNS - Domain name system (giving names to the websites) ; HTTP - hyper text transfer protocol ; SNMP - simple network maintain protocol ; LDAP - lightweight directory access protocol ;

## LockHeed Cyber Kill Chain.

- [ ] 1. Reconnaissance - obtain the information about the target.
- [ ] 2. Weaponisation - create the malware to use against the victim.
- [ ] 3. Delivery - infiltrate the victims network to deliver the malware.
- [ ] 4. Exploitation - take steps to achieve goals.
- [ ] 5. Installation - Install malware, backdoors and other cyber weapons.
- [ ] 6. Command and Control (C2) - Communicate with the malware once installed.
- [ ] 7. Actions - the final objective i.e stealing the information or disrupting the services.

## MITRE ATT&CK Framework.

- [ ] ATT&CK stands for Adverbial Tactics, Techniques & Common Knowledge.
- [ ] 1. Reconnaissance - Gather info about the victim.
- [ ] 2. Resource development - establish the resources to use.
- [ ] 3. Initial access - gain access to victims network.
- [ ] 4. Execution - run malicious code.
- [ ] 5. Persistence - Maintain ones foothold.
- [ ] 6. Privilege Escalation - Gain higer privileges.
- [ ] 7. Defence evasion - avoid being detected.
- [ ] 8. Credential access - steal the account credentials.
- [ ] 9. Discovery - learn more about the network.
- [ ] 10. Lateral movement - move around the network.
- [ ] 11. Collection - gather data.
- [ ] 12. Command and control (C2) - communicate with the malware and execute steps.
- [ ] 13. Exfiltration - steal data.
- [ ] 14. Impact - manipulate, interrupt and destroy systems and data.
- [ ] TTP (Tactics, Techniques and Procedures) are used for reference based on the mitre attack model.
- [ ] CVE - common vulnerabilities and exposures. All the known vulnerabilities are given a specific number for easy identification.
 Spoofing - it is the act of someone presenting themselves as if they are someone you can trust but in reality they are a threat actor.
- [ ] Phishing - It is also a type of spoofing where the threat actor majorly focuses on the social media and emails. The perpetrator basically masquerades as a legitimate business or reputable person.
- [ ] Spearphishing - Targeting high level individuals.
- [ ] Vishing - malicious voice messages.