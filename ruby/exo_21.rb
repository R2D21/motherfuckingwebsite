# coding: utf-8
puts "combiens d'étages voulez-vous pour votre pyramide\n"
pyramide = gets.chomp.to_i;
i = pyramide;
while i != 0
  1.upto(i).each{|i|puts ("* " * i).rjust(pyramide * 2)}
  break i >1
end
