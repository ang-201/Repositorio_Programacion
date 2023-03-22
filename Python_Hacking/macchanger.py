import subprocess as macchanger
import optparse as shell # Biblioteca que analiza los argumentos de un archivo .py


interface=""
new_mac=""
comand_line = shell.OptionParser() #objeto que me permitira crear la interfaz de comandos
comand_line.add_option("-i","--interface", dest = "interface",help= "Interface")
comand_line.add_option("-m","--MAC", dest= "new_mac",help= "Direccion MAC del dispositivo")
(options,arguments)= comand_line.parse_args()

interface=options.interface
new_mac= options.new_mac

print("\nCambiando mac [+] de la:" + interface  + "a:\n" + new_mac)

#macchanger.call(" ifconfig " + interface + " down", shell = True)
#macchanger.call(" ifconfig " + interface + " hw ether " + new_mac, shell=True)
#macchanger.call(" ifconfig " + interface + " up ", shell= True)


#Solucionando vulnerabilidad de shell 
macchanger.call(["ifconfig", interface,"down"])
macchanger.call(["ifconfig", interface, "hw", "ether",new_mac])
macchanger.call(["ifconfig", interface,"up"])

