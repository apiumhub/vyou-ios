//
//  Checkbox.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 28/1/22.
//

import Foundation
import SwiftUI

struct Checkbox: View {
    @Binding var checked: Bool
    var text: String
    
    var body: some View {
        HStack {
            Image(systemName: checked ? "checkmark.square.fill" : "square")
                .foregroundColor(checked ? Color(UIColor.systemBlue) : Color.secondary)
                .onTapGesture {
                    self.checked.toggle()
                }
            Text(text)
        }
       
    }
}

struct Checkbox_Previews: PreviewProvider {
    struct CheckboxViewHolder: View {
        @State var checked = false
        
        var body: some View {
            Checkbox(checked: $checked, text: "Checkbox")
        }
    }
    
    static var previews: some View {
        CheckboxViewHolder()
    }
}
