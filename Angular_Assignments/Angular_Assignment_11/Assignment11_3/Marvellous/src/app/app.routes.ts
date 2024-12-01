import { NgModule } from '@angular/core';
import { RouterModule, Routes} from '@angular/router';
import { TechnologiesComponent } from './technologies/technologies.component';
import { BooksComponent } from './books/books.component';
import { InvalidComponent } from './invalid/invalid.component';

export const routes: Routes = [
    {
        path : 'technologies',
        component : TechnologiesComponent
    },
    {
        path : 'books',
        component : BooksComponent
    },
    {
        path : '', redirectTo:'/technologies', pathMatch:'full',
    },
    {
        path : '**',
        component : InvalidComponent
    }
];

@NgModule(
    {
        imports : [RouterModule.forRoot(routes)],
        exports : [RouterModule]
    }
)

export class AppRoutingModule{}

