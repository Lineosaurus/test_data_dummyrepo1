// This is a dummy TypeScript file

// Basic types
let num: number = 42;
let str: string = "Hello, TypeScript!";
let bool: boolean = true;

// Arrays
let numArray: number[] = [1, 2, 3, 4, 5];
let strArray: string[] = ["apple", "banana", "cherry"];

// Objects
let person: { name: string, age: number } = { name: "Alice", age: 30 };

// Functions
function add(a: number, b: number): number {
    return a + b;
}

// Interfaces
interface Animal {
    name: string;
    sound: string;
}

// Classes
class Dog implements Animal {
    name: string;
    sound: string;

    constructor(name: string) {
        this.name = name;
        this.sound = "Woof!";
    }
}

// Generics
function identity<T>(value: T): T {
    return value;
}

// Enums
enum Color {
    Red,
    Green,
    Blue
}

// Type Aliases
type Point = { x: number, y: number };

// Namespaces
namespace Geometry {
    export function calculateArea(width: number, height: number): number {
        return width * height;
    }
}

// Modules (export/import)
import { calculateArea } from './geometry';

let area = calculateArea(5, 10);

console.log("Area:", area);
