//
//  Operators.swift
//  
//
//  Created by Elviro Dominguez Soriano on 22/05/22.
//

func assigment(_ num1: Int, _ num2: Int) {
    var assigment1: Int
    var assigment2: Int
    var increment: Int
    var decrement: Int
    
    print("Assigment operator")
    
    assigment1 = num1
    assigment2 = num2
    
    print("assigment1: \(assigment1)")
    print("assigment2: \(assigment2)")
    
    increment = num1
    increment += 1
    print("increment: \(increment)")
    
    decrement = num2
    decrement -= 1
    print("decrement: \(decrement) \n")
}

func unary(_ num1: Int, _ num2: Int) {
    var possitive: Int
    var negative: Int
    
    possitive = num1 + num1
    print("possitive: \(possitive)")
    
    negative = num2 + num2
    print("negative: \(negative)")
    
}

func arimethic(_ num1: Int, _ num2: Int) {
    var sum: Int
    var sub: Int
    var mult: Int
    var division: Int
    var module: Int
    
    print("Arimethic operators")
    
    sum = num1 + num2
    print("Sum: \(sum)")
    
    sub = num1 - num2
    print("Sub: \(sub)")
    
    mult = num1 * num2
    print("Multiplication: \(mult)")
    
    division = num1 / num2
    print("Dvision: \(division)")
    
    module = num1 % num2
    print("Module: \(module) \n")
    
}

func comparasion(_ num1:Int , _ num2: Int) {
    var lessThan: Bool
    var greatherThan: Bool
    var lessThanEqualTo: Bool
    var greatherThanEqualTo: Bool
    var equalTo: Bool
    var notEqualTo: Bool
    
    print("Comparasion operators")
    
    lessThan = num1 < num2
    print("lessThan: \(lessThan)")
    
    greatherThan = num1 > num2
    print("greatherThan: \(greatherThan)")
    
    lessThanEqualTo = num1 <= num2
    print("greatherThanEqualTo \(lessThanEqualTo)")
    
    greatherThanEqualTo = num1 >= num2
    print("greatherThanEqualTo \(greatherThanEqualTo)")
    
    equalTo = num1 == num2
    print("equalTo: \(equalTo)")
    
    notEqualTo = num1 != num2
    print("notEqualTo: \(notEqualTo) \n")
}

func logical(_ num1: Int, _ num2: Int) {
    var and: Bool
    var or: Bool
    var not: Bool
    let optional: Bool?
    let nilCoalescing: Bool?
    
    print("Logical operators")
    
    and = num1 > 0 && num2 > 0
    print("and: \(and)")
    
//    if (optional == nil) {
//        print("optional: \(optional)")
//    }
}

func staments(_ num1: Int, _ num2: Int) {
    let ternary: Int

    print("Staments operators")
    
    ternary = num1 == num2 ? "Yes" : "Not"
    print(ternary)
    
}

assigment(1, 2)
unary(+1, -2)
arimethic(1, 2)
comparasion(1, 2)
logical(1, 2)
staments(1, 2)
